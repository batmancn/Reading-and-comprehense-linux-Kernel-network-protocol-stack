### Reference.
1. <������>
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

SFQ: �����ƽ����
TBF: ʹ��leak bucket�㷨�ĵ���
pFIFO: FIFO

PRIO: ��FIFO���У��������ҵ���
CBQ: �������Ϊ��class�ļ�ȨSFQ
HTB: ��class��TBF


### ����ʲôʱ�������ֶ��еĽ��飬��һ���ԣ��ο�<3>

? ����뵥���ؽ��ͳ������ʣ�ʹ������Ͱ������������Ͱ�����ú�����ڿ��ƺܸߵĴ���

? ��������·�Ѿ������ˣ������뱣֤������ĳһ���Ự��ռ���ڴ���ʹ�������ƽ���С�

? �������һ���ܴ�ĹǸɴ��������˽�����ؼ����󣬿��Կ���ǰ���������(�μ����߼�����һ��)��

? ���ϣ��������������С����Ρ�������ת������������ʹ������������ԣ�ע�⣬�ⲻ�������ġ����Ρ���

? ���������ת�����ݰ���������������������Ӧ��TBF��������ϣ�������ݰ��Ӷ������������Ҳ����˵�����������������õ�ʱ�򣬻���ʹ����ڲ��ԡ�

? ����㲢��ϣ�������������Σ�ֻ���뿴����������Ƿ��бȽϸߵĸ��ض���Ҫʹ�ö��У�ʹ��pfifo���У�����pfifo_fast������ȱ���ڲ�Ƶ�����ǿ���ͳ��backlog��

