[![Build Status](https://travis-ci.org/DolanL/vector_example/builds/357504273)
```
cmake -H. -B_builds -DBUILD_TESTS=ON
cmake --build _builds
cmake --build _builds --target test -- ARGS=--verbose
```
