extern int llstart(void);
extern int llcorgo(void);
extern int selfcore;

void
lmaccess(char *s, int i) {
        (void)s;
        if (i == 0) {
                if (selfcore == 0) {
                        llstart();
                } else  {
                        llcorgo();
                }
        }
}

int
lmalive(char* s) {
        (void)s;
        return 0;
}
