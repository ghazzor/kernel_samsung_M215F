make clean && make distclean
export PATH=$HOME/android/toolchain/sammy_clang_v8/clang/host/linux-x86/clang-r349610-jopp/bin:$PATH


export CROSS_COMPILE=$HOME/android/toolchain/sammy_clang_v8/gcc-cfp/gcc-cfp-jopp-only/aarch64-linux-android-4.9/bin/aarch64-linux-android-
export CLANG_TRIPLE=$HOME/android/toolchain/sammy_clang_v8/clang/host/linux-x86/clang-r349610-jopp/bin/aarch64-linux-gnu-
export CC=$HOME/android/toolchain/sammy_clang_v8/clang/host/linux-x86/clang-r349610-jopp/bin/clang
#    'google': {
#        'CROSS_COMPILE': 'toolchain/aarch64-linux-android-4.9/bin/aarch64-linux-android-',
#        'CLANG_TRIPLE': 'toolchain/llvm/bin/aarch64-linux-android-',
#        'CC': 'toolchain/llvm/bin/clang',
#        'LD': 'toolchain/llvm/bin/ld.lld',
#        'AR': 'toolchain/llvm/bin/llvm-ar',
#        'NM': 'toolchain/llvm/bin/llvm-nm',
#        'OBJCOPY': 'toolchain/llvm/bin/llvm-objcopy',
#        'OBJDUMP': 'toolchain/llvm/bin/llvm-objdump',
#        'READELF': 'toolchain/llvm/bin/llvm-readelf',
#        'OBJSIZE': 'toolchain/llvm/bin/llvm-size',
#        'STRIP': 'toolchain/llvm/bin/llvm-strip',
#       'LDGOLD': 'toolchain/aarch64-linux-android-4.9/bin/aarch64-linux-android-ld.gold',
#        'LLVM_AR': 'toolchain/llvm/bin/llvm-ar',
#        'LLVM_DIS': 'toolchain/llvm/bin/llvm-dis'
#


export ARCH=arm64
export PLATFORM_VERSION=12
export ANDROID_MAJOR_VERSION=s


make CC=clang ARCH=arm64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y exynos9610-m21dd_defconfig
make CC=clang ARCH=arm64 KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y -j$(nproc)

bash mkzip.sh