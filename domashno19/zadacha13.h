struct firms{
    int id;
    char name[20];
};

struct boss{
    char firstName[10];
    char lastName[10];
};

struct employees{
    int id;
    char firstName[10];
    char midName[10];
    char lastName[10];
    char position[10];
    int  exp;
    float salary;
    struct boss empBoss;
    struct firms empFirm;
};

void addEmployee(struct employees *emp);
