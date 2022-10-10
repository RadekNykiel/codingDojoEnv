# General information

Template CMake project for simple C++ project with Google Test and Google Mock

You may replace the 'src', and 'test' directories' contents with your own source/header files.

# Prerequisite

Requires installed git.

# Step-by-step configuration

1. Copy program source (\*.cpp) files to 'src' directory and header files (\*.h,\*.hpp) to 'src/include'.
2. Copy test source (\*.cpp) files to 'test' directory.
3. Edit CMakeFile.txt file:
* Change project name in `project( )` section.
* Set main program name and test program name in following lines:
```
set(MAIN_PROGRAM_NAME <program_name>)
set(TEST_PROGRAM_NAME <test_program_name>)
```

* Change source files:
```
add_executable(
    ...
    src/<file_1>
    src/<file_2>
    ...
)
```

* Update test sources:
```
add_executable(
    ...
    src/<file_1>
    src/<file_2>
    ...
    test/<test_source_1>
    test/<test_source_2>
    ...
)
```

4. Proceed to the 'Build and run' section.

# Build and run

## Visual Studio

Open Folder and select the project directory. Hit "Select folder".

In project explorer open main CMakeLists.txt file.

The IDE will ask to generate CMake cache. Hit "Generate".

From top menu choose Build -> Build all... .

You may need to adjust CMake presets for your VS version. In CMakePresets.json,
for windows-base configuration please update `"generator": "Visual Studio 17 2022"`
section with relevant generator name.

Run exe files from the cmd line or VS IDE top bar.

## Linux

In project directory:
```
mkdir build
cd build
cmake ..
make
```

Run binaries from the cmd line.


