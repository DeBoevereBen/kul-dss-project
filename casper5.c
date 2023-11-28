#include <stdio.h>
#include <unistd.h>
#include <string.h>

int enableGlobalAdmin = 0;
int enableFullAdmin = 0;

struct role_t {
    char rolename[32];
    int authority;
} defaultRole = { .rolename = "regular user", .authority = 0 };

struct user_t {
    char name[775];
    struct role_t *role;
};

void inputUser(struct user_t *u, char *s) {
    strcpy(u->name, s);
}

void greetUser(struct user_t *u) {
    printf("Hello %s, you have role '%s'\n", u->name, u->role->rolename);
}

int main(int argc, char **argv) {
    struct user_t thisUser;
    thisUser.role = &defaultRole;

    if (argc < 2) {
        printf("ERROR\n");
    }
    inputUser(&thisUser, argv[1]);
    greetUser(&thisUser);

    if((thisUser.role)->authority == 1) {
        printf("Congratulations! You are an admin\n");
        setresuid(geteuid(), geteuid(), geteuid());
        execl("/bin/xh", "/bin/xh", NULL);
    }

    return 0;
}
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int enableGlobalAdmin = 0;
int enableFullAdmin = 0;

struct role_t {
    char rolename[32];
    int authority;
} defaultRole = { .rolename = "regular user", .authority = 0 };

struct user_t {
    char name[775];
    struct role_t *role;
};

void inputUser(struct user_t *u, char *s) {
    strcpy(u->name, s);
}

void greetUser(struct user_t *u) {
    printf("Hello %s, you have role '%s'\n", u->name, u->role->rolename);
}

int main(int argc, char **argv) {
    struct user_t thisUser;
    thisUser.role = &defaultRole;

    if (argc < 2) {
        printf("ERROR\n");
    }
    inputUser(&thisUser, argv[1]);
    greetUser(&thisUser);

    if((thisUser.role)->authority == 1) {
        printf("Congratulations! You are an admin\n");
        setresuid(geteuid(), geteuid(), geteuid());
        execl("/bin/xh", "/bin/xh", NULL);
    }

    return 0;
}
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int enableGlobalAdmin = 0;
int enableFullAdmin = 0;

struct role_t {
    char rolename[32];
    int authority;
} defaultRole = { .rolename = "regular user", .authority = 0 };

struct user_t {
    char name[775];
    struct role_t *role;
};

void inputUser(struct user_t *u, char *s) {
    strcpy(u->name, s);
}

void greetUser(struct user_t *u) {
    printf("Hello %s, you have role '%s'\n", u->name, u->role->rolename);
}

int main(int argc, char **argv) {
    struct user_t thisUser;
    thisUser.role = &defaultRole;

    if (argc < 2) {
        printf("ERROR\n");
    }
    inputUser(&thisUser, argv[1]);
    greetUser(&thisUser);

    if((thisUser.role)->authority == 1) {
        printf("Congratulations! You are an admin\n");
        setresuid(geteuid(), geteuid(), geteuid());
        execl("/bin/xh", "/bin/xh", NULL);
    }

    return 0;
}
