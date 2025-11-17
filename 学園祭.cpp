
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    char erabu;
    char sentaku;
    char username[3];
    int i;
    time_t t;
    struct tm *now;

    t = time(NULL);
    now = localtime(&t);


    printf("   島根デザインITカレッジようこそ！ \n");

    printf("イニシャルを記入してください ");
    scanf("%s", username);

    printf("\n%sさん、入学を希望しますか?\n", username);


    printf("はい(Yを押す)\n");
    printf("いいえ(Nを押す)\n");
    printf("選択: ");
    scanf(" %c", &erabu);


    if (erabu == 'y' || erabu == 'Y') {


        printf("\nまずは入学試験を受けてください！\n");
        sleep(1);


        int count = 0;
        int kotae;

        printf("IT科のキャンパスはどこにある？？\n");
        printf("1. 雲南\n2. 八川\n3. 横田\n");
        printf("回答番号を入力: ");
        scanf("%d", &kotae);
        if (kotae == 2) count++;


        printf("\nIT科一年２４人中、留学生は何人？\n");
        printf("1. 21人\n2. １５人\n3. ８人\n");
        printf("回答番号を入力: ");
        scanf("%d", &kotae);
        if (kotae == 1) count++;




        if (count < 2) {
            printf("\n全問正解してください...\n");
            sleep(1);
            return 0;
        }

        printf("\n合格です！入学手続きを開始します...\n");
        sleep(2);

        printf("入学手続き中...\n");
        sleep(1);
        printf("時刻: %d年 %d月 %d日 %02d時 %02d分 %02d秒 \n",
           now->tm_year + 1900,
           now->tm_mon + 1,
           now->tm_mday,
           now->tm_hour,
           now->tm_min,
           now->tm_sec);
        sleep(2);

        printf("===================================\n");
        printf("     システムエラー！\n");
        printf("ファイルを修復してください\n");
        printf("===================================\n");
        sleep(2);

        printf("\n修復方法を選択してください：\n");
        printf("1. 自動修復\n");
        printf("2. 手動修復\n");
        printf("入力 : ");
        scanf("%d", &sentaku);

        printf("\n========================================\n");

        if (sentaku == 1) {
            printf("自動修復を開始します...\n");
            sleep(1);
            for (int i = 0; i < 3; i++) {
                printf("修復中");
                for (int j = 0; j < 3; j++) {
                    printf(".");
                    sleep(1);
                }
                printf("\n");
            }
            printf("修復完了！\n");
            printf("\n");
            printf("+------------------------------------+\n");
            printf("|     修復していただきありがとうございます  |\n");
            printf("|     ご入学おめでとうございます          |\n");
            printf("+------------------------------------+");
        }
        else if (sentaku == 2) {
            char word[50];
            printf("手動修復モードを起動中...\n");
            sleep(1);
            printf("あなたの修復コードを入力してください。 : ");
            scanf("%s", word);
            printf("コマンド \"%s\" を実行中...\n", word);
            sleep(2);
            printf("修復完了！\n");
            printf("\n");
            printf("+------------------------------------+\n");
            printf("|     修復していただきありがとうございます  |\n");
            printf("|     ご入学おめでとうございます       　　|\n");
            printf("+------------------------------------+");
        }
        else {
            sleep(2);

            printf("          pcが壊れました。\n");
            printf("========================================\n");
        }

        printf("プログラムを終了します。\n");
    } else {

        printf("\n\n");
        printf("え？\n");
        sleep(1);
        printf("...入学手続きを行います。\n");
        sleep(2);

        printf("\n");
        printf("===============================\n");
        printf("     入学手続き中...\n");
        printf("===============================\n");

        printf("カメラ起動中...");
        sleep(1);
        printf("顔認証中...");
        sleep(1);
        printf("ファイルを暗号化中...\n");

        printf("最終カウントダウン...\n");
        for (i = 5; i > 0; i--) {
            printf("%d\n", i);
            sleep(1);
        }

        printf("\n");
        printf("+------------------------------------+\n");
        printf("|     ご入学おめでとうございます          |\n");
        printf("+------------------------------------+");
    }

    return 0;
}
d