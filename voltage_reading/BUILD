load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "voltage_reading",
    srcs = glob([
        "source/*.cpp",
    ]),
    hdrs = glob([
        "source/*.h",
    ]),
    includes = [
        "source",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "voltage_reading_bin",
    deps = [
        ":voltage_reading",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)


cc_test(
    name = "test_voltage_reading",
    size = "small",
    timeout = "short",
    srcs = glob(
        ["tests/*.cpp"],
    ),
    deps = [
        "@com_google_googletest//:gtest_main",
        ":voltage_reading"
    ],
)
