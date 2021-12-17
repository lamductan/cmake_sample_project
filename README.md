# Sample-Project

## Steps to create a new project
1. Rename `include/sample-project` to `include/{new-project-name}`
2. Open `include/{new-project-name}/utils.h`, replace "SAMPLE_PROJECT_" by "{NEW_PROJECT_NAME_}"
3. Open `src/main.cpp`, replace "sample-project" by "{new-project-name}"
4. Open `src/utils.cpp`, replace "sample-project" by "{new-project-name}"
5. Open `test/src/test_utils.cpp`, replace "sample-project" by "{new-project-name}"
6. Open `test/CMakeLists.txt`, replace "sample-project" by "{new-project-name}"
7. Open `CMakeLists.txt`, replace "sample-project" by "{new-project-name}", replace "SampleProject" by "{NewProjectName}"
8. Update `README.md`
9. Unzip `third_party.zip`
10. Start coding

## Build and run
```
cd build
cmake ..
make
./prog
./test/tests
```
