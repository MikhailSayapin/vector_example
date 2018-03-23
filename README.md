[![Build Status](hthttps://travis-ci.org/MikhailSayapin/vector_example/jobs/357598808)

```
cmake -H. -B_builds -DBUILD_TESTS=ON
cmake --build _builds
cmake --build _builds --target test -- ARGS=--verbose
```
