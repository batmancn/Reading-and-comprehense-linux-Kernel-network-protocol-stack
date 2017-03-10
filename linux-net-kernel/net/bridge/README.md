1. https://wiki.linuxfoundation.org/networking/bridge
2. http://ebtables.netfilter.org/
3. http://ebtables.netfilter.org/misc/ebtables-man.html

refer <3>
Match fields: 802.3, mac, ip, ip6, limit, mark_m, stp bpdu, vlan.
target: arpapply(PREROUTING-nat), dnat(BROUTING-broute, PREROUTING-nat, OUTPUT-nat), mark(every), snat(POSTROUTING-nat)


