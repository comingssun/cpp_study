#include <stdio.h>

class SinivelCap
{
    public:
    void Take() const{
        printf("콧물이 싹 납니다.\n");
    }
};

class SneezeCap{
    public:
    void Take() const{
        printf("재채기가 멎습니다.\n");
    }
};

class SnuffleCap{
    public:
    void Take() const{
        printf("코가 뻥 뚫립니다.\n");
    }
};

class CONTAC600{
    private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

    public:
    void Take() const{
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient{
    public:
    void TakeCONTAC600(const CONTAC600 &cap) const
    {
        cap.Take();
    }
};

int main(void)
{
    CONTAC600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTAC600(cap);
    return 0;
}