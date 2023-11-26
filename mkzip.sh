echo "Cleaning Stuff"
rm -rf AIK/Image
echo "done"
echo ""
echo "Copying Stuff"
cp -r arch/arm64/boot/Image AIK/Image
echo "done"
echo ""
kver=$(make kernelversion)
kmod=$(echo ${kver} | awk -F'.' '{print $3}')
echo "Zipping Stuff"
cd AIK
rm -rf STOCK_KERNEL.*.zip
zip -r1 STOCK_KERNEL.${kmod}_LATEST.zip * -x .git README.md *placeholder
cd ..
echo "Ready to Flash"

