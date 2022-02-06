all: rm-elf DigitalKey.elf

KOS_ROMDISK_DIR = romdisk_boot
include $(KOS_BASE)/Makefile.rules

OBJS = DigitalKey.o romdisk.o

clean:
	rm -f DigitalKey.elf $(OBJS)

rm-elf:
	rm -f DigitalKey.elf
	rm -f romdisk.img

DigitalKey.elf: $(OBJS)
	kos-cc -o DigitalKey.elf $(OBJS)

run: DigitalKey.elf
	$(KOS_LOADER) DigitalKey.elf

dist:
	rm -f $(OBJS) romdisk.*
	$(KOS_STRIP) DigitalKey.elf

