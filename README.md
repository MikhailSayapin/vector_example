[![Build Status](https://travis-ci.org/MikhailSayapin/vector_example/builds/357586541)

```
cmake -H. -B_builds -DBUILD_TESTS=ON
cmake --build _builds
cmake --build _builds --target test -- ARGS=--verbose
```
