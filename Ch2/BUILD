load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "ch2",
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
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "ch2_bin",
    srcs = glob([
        "source/*.cpp",
        "source/**/*.cpp",
    ]),

    includes = [
        "source",
        "source/01",
        "source/02",
    ],
    deps = [
        ":ch2",
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
    includes = [
        "source/01",
    ],
    deps = [
        "@com_google_googletest//:gtest_main",
        ":ch2"
    ],
)
