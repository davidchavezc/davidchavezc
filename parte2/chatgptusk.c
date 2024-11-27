    #include <stdio.h>
    #include <string.h>
    #define char_limit 20
    char password[char_limit], user[char_limit], valid_user[char_limit], valid_password[char_limit];
    int auth_validation = 1, user_auth, password_auth, saldo;
    void clean_string(){
        strtok(user, "\n");
        strtok(password, "\n");
    }
    void auth(){
        strcpy(valid_password, "123"); strcpy(valid_user, "admin");
        printf("Ingrese su usuario: "); fgets(user, char_limit, stdin);
        printf("Ingrese su contrasena: "); fgets(password, char_limit, stdin); clean_string();
        user_auth = strcmp(valid_user, user);
        password_auth = strcmp(valid_password, password);
        if (user_auth==0 && password_auth==0)
        {
            auth_validation=0;
        }
    }

    int main(){
        auth();
        if (auth_validation==0)
        {
            printf("bienvenido al programa");
            return 0;
        }
        else
        {
            printf("Credenciales de inicio de sesion invalidas.\nIntente nuevamente por favor.");
            return 1;
        }

    }