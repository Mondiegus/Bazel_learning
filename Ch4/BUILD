load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "ch4",
    srcs = glob([
        "source/*.cpp",
        "source/**/*.cpp",
    ]),
    hdrs = glob([
        "*.h",
        "source/**/*.h",
    ]),
    includes = [
        "source",
        "source/01",
        "source/02",
        "source/03",
        "source/04",
        "source/05",
        "source/06",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "ch4_bin",
    deps = [
        ":ch4",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)


cc_test(
    name = "test",
    size = "small",
    timeout = "short",
    srcs = glob(
        ["tests/*.cpp"],
    ),
    deps = [
        "@com_google_googletest//:gtest_main",
        ":ch4"
    ],
)
