# nproc

## Overview

`nproc` is a command-line utility designed to retrieve and display the number of processing units available (and online)
on the system. It provides an essential way for developers and system administrators to understand system resources for
optimization and tuning purposes.

## Features

- Retrieve the number of available processing units.
- Supports multiple platforms (Linux, macOS, etc.).
- Lightweight and efficient implementation.

## Prerequisites

To build and run `nproc`, you'll need the following:

- **C Compiler**: A modern C compiler that supports C11 or later.
- **CMake**: Version 3.30 or higher.
- **Standard C Library**: Whatever you have installed should work, but don't take my word for it on Windows.

## Building the Project

To build the project, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/sindastra/nproc
   cd nproc
   ```

2. Create a build directory and navigate into it:

   ```bash
   mkdir build
   cd build
   ```

3. Run CMake to configure the build system:

   ```bash
   cmake ..
   ```

4. Compile the project:

   ```bash
   make
   ```

5. The executable will be generated in the `build` directory.

## Usage

Run the `nproc` executable from the command line:

```bash
./nproc
```

It will display the number of available (and online) processing units detected on your system.

## Example Output

```bash
8
```

## Contributing

Contributions are welcome! If you have suggestions or improvements, feel free to submit a pull request or create an
issue in the repository.

## License

This project is licensed under the **EUPL-1.2**. See the `LICENSE` file for more details.

### Acknowledgments

This README was written mostly by an LLM, with the nonsense corrected and jokes added by a human.
I think it took me more time to correct things than to write it from scratch.
But then again, I don't think I would have made it this long and polished from scratch.
