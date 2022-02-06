mkdir cd_root
make
make dist
elf2bin DigitalKey.elf
scramble DigitalKey.bin cd_root/1ST_READ.BIN
ipcreate -silent
makedisc DigitalKey.cdi cd_root IP.BIN DigitalKey
#browse
