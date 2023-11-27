bash init_default.sh
export PATH=$PWD/sammy_clang_v8/clang/host/linux-x86/clang-r349610-jopp/bin:$PATH


export CROSS_COMPILE=$PWD/sammy_clang_v8/gcc-cfp/gcc-cfp-jopp-only/aarch64-linux-android-4.9/bin/aarch64-linux-android-
export CLANG_TRIPLE=$PWD/sammy_clang_v8/clang/host/linux-x86/clang-r349610-jopp/bin/aarch64-linux-gnu-
export CC=$PWD/sammy_clang_v8/clang/host/linux-x86/clang-r349610-jopp/bin/clang


make clean && make distclean


export ARCH=arm64
export PLATFORM_VERSION=12
export ANDROID_MAJOR_VERSION=s


make CC=clang ARCH=arm64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y exynos9610-m21dd_defconfig
make CC=clang ARCH=arm64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y -j$(nproc)
