load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "tasks",
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
        "source/04",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "tasks_bin",
    deps = [
        ":tasks",
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
        ":tasks"
    ],
)
