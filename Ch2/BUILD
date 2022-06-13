load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "ch2",
    srcs = glob([
        "source/*.cpp",
    ]),
    includes = [
        "source",
    ],
)

cc_test(
    name = "test",
    size = "small",
    timeout = "short",
    srcs = glob(
        ["tests/*.cpp"],
    ),
    includes = [
        "source",
    ],
    deps = [
        "@com_google_googletest//:gtest_main",
    ],
)
