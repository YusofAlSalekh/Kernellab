obj-m := h.o
KDIR := /home/yusof/yus/linux-5.10.76
all:
	$(MAKE) -C $(KDIR) M=$$PWD


