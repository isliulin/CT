����׼��

    1) ��װ����ϵͳ(32λ)
        ubuntu 14.04.5(windows��, ���԰�װ��VirtualBox�������)
        ISO���ص�ַ: http://mirrors.163.com/ubuntu-releases/14.04.5/ubuntu-14.04.5-desktop-i386.iso

    2) ���²���ϵͳ
        apt update
        apt upgrade -y

    3) ��װgit
        apt-get install git

    3) ��װ��Ҫ�Ŀ��ļ�
        apt install libgoocanvas-dev libxtst-dev libdbus-glib-1-dev libopencv-dev libsqlite3-dev libcups2-dev libx264-dev
        apt install libxml2-dev libssl-dev libwrap0-dev

�汾����
    make
    strip 09001Color

i18n�ļ�����
    ./update_po.sh

�汾����
    1) ���ļ�09001Color������U��(����U�̵�CTĿ¼��)
    2) ��U�̲嵽�豸��
    3) ��Ctrl+Alt+T, ���ᵯ�������д���
    4) �������д���, ����top����鿴09001Color���̶�Ӧ��PID(����3550)
    5) ��Ctrl+C, ����top����, ����kill����ɱ��09001Color(���� kill 3550)
    6) ����һ������U�̵�Ŀ¼(����a)
    7) ʹ��mount�������U��(����mount /dev/sdb1 a), ��ʱ����Ŀ¼a�¾Ϳ��Կ���U�̵�����
    8) ��U��CTĿ¼�µĳ���09001Color������ϵͳ, �滻ԭ���ĳ���
    9) ʹ��umount����ж��U��(����umount a)
    10) ִ�������ű�, ��������
