extern crate bindgen;

use std::env;
use std::path::PathBuf;
use std::process::Command;

fn main() {
    // compile quickjs
    if cfg!(target_os = "linux") || cfg!(target_os = "macos") {
        Command::new("make")
                .arg("libquickjs.bn.lto.a")
                .current_dir("quickjs-2019-07-09")
                .status()
                .expect("failed to make!");
    } else {
        unimplemented!()
    }

    // Tell cargo to tell rustc to link the system bzip2
    // shared library.
    println!("cargo:rustc-link-search=quickjs-2019-07-09");
    println!("cargo:rustc-link-lib=static=quickjs.bn.lto");

    // The bindgen::Builder is the main entry point
    // to bindgen, and lets you build up options for
    // the resulting bindings.
    let bindings = bindgen::Builder::default()
        // The input header we would like to generate
        // bindings for.
        .header("wrapper.h")
        .clang_arg("-Iquickjs-2019-07-09")
        // Finish the builder and generate the bindings.
        .generate()
        // Unwrap the Result and panic on failure.
        .expect("Unable to generate bindings");

    // Write the bindings to the $OUT_DIR/bindings.rs file.
    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}
