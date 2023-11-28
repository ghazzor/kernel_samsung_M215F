make clean && make distclean
export PATH=$HOME/android/toolchain/google/llvm/bin:$PATH

export CROSS_COMPILE=$HOME/android/toolchain/sammy_clang_v8/gcc-cfp/gcc-cfp-jopp-only/aarch64-linux-android-4.9/bin/aarch64-linux-android-
export CLANG_TRIPLE=$HOME/android/toolchain/google/llvm/bin/aarch64-linux-gnu-
export CC=$HOME/android/toolchain/google/llvm/bin/clang
export LD=$HOME/android/toolchain/google/llvm/bin/ld.lld
export AR=$HOME/android/toolchain/google/llvm/bin/llvm-ar
export NM=$HOME/android/toolchain/google/llvm/bin/llvm-nm
export OBJCOPY=$HOME/android/toolchain/google/llvm/bin/llvm-objcopy
export OBJDUMP=$HOME/android/toolchain/google/llvm/bin/llvm-objdump
export READELF=$HOME/android/toolchain/google/llvm/bin/llvm-readelf
export OBJSIZE=$HOME/android/toolchain/google/llvm/bin/llvm-size
export STRIP=$HOME/android/toolchain/google/llvm/bin/llvm-strip
#export LDGOLD=$HOME/android/toolchain/google/sammy_clang_v8/gcc-cfp/gcc-cfp-jopp-only/aarch64-linux-android-4.9/bin/aarch64-linux-android-ld.gold
export LLVM_AR=$HOME/android/toolchain/google/llvm/bin/llvm-ar
export LLVM_DIS=$HOME/android/toolchain/google/llvm/bin/llvm-dis



export ARCH=arm64
export PLATFORM_VERSION=12
export ANDROID_MAJOR_VERSION=s


make CC=clang ARCH=arm64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y exynos9610-m21dd_defconfig
make CC=clang ARCH=arm64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y -j$(nproc) | tee error_log.txt

bash mkzip.sh
