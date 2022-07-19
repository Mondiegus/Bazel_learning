load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "substrWithoutRepeat",
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
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "substrWithoutRepeat_bin",
    deps = [
        ":substrWithoutRepeat",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)


cc_test(
    name = "test",
    size = "medium",
    timeout = "long",
    srcs = glob(
        ["tests/*.cpp"],
    ),
    deps = [
        "@com_google_googletest//:gtest_main",
        ":substrWithoutRepeat"
    ],
)
