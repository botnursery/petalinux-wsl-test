# Remove the current usr and lib directories
sudo -S rm -rf sdk/sysroots/usr
sudo -S rm -rf sdk/sysroots/lib

# Copy the newly generated ones
sudo cp -R -L images/linux/sdk/sysroots/cortexa9t2hf-neon-xilinx-linux-gnueabi/usr sdk/sysroots/
sudo cp -R -L images/linux/sdk/sysroots/cortexa9t2hf-neon-xilinx-linux-gnueabi/lib sdk/sysroots/

# Get a list of the CAPS APPENDED duplicate files and add them to the gitignore
find ./sdk/ | sort -f | tac | uniq -di | cut -c2- >> .gitignore

# Remove duplicate lines and save in .temp
sort .gitignore | uniq > .temp

# Remove gitignore and rename .temp to that
rm .gitignore
mv .temp .gitignore
