### Reference.
1. <樊东东>
2. http://linux-ip.net/articles/Traffic-Control-HOWTO/components.html\
3. http://www.linuxidc.com/Linux/2010-07/27245p3.htm


### TC function call.
refer <1>P179 F9-3. TC tree is only for enqueue and dequeue control(which is
whether en/de queue), no response for timer.


### TC tree construct.
Qdisc, classful-qdisc(root or node), classless-qdisc(leaf)
Filter,
Class.


### classless/classfule mechenism.

classless: SFQ, TBF, pFIFO
classful: PRIO, HTB, CBQ

SFQ: 随机公平队列
TBF: 使用leak bucket算法的调度
pFIFO: FIFO

PRIO: 多FIFO队列，从左至右调度
CBQ: 可以理解为带class的加权SFQ
HTB: 带class的TBF


### 关于什么时候用哪种队列的建议，不一定对，参考<3>

? 如果想单纯地降低出口速率，使用令牌桶过滤器。调整桶的配置后可用于控制很高的带宽。

? 如果你的链路已经塞满了，而你想保证不会有某一个会话独占出口带宽，使用随机公平队列。

? 如果你有一个很大的骨干带宽，并且了解了相关技术后，可以考虑前向随机丢包(参见“高级”那一章)。

? 如果希望对入口流量进行“整形”（不是转发流量），可使用入口流量策略，注意，这不是真正的“整形”。

? 如果你正在转发数据包，在数据流出的网卡上应用TBF。除非你希望让数据包从多个网卡流出，也就是说入口网卡起决定性作用的时候，还是使用入口策略。

? 如果你并不希望进行流量整形，只是想看看你的网卡是否有比较高的负载而需要使用队列，使用pfifo队列（不是pfifo_fast）。它缺乏内部频道但是可以统计backlog。

