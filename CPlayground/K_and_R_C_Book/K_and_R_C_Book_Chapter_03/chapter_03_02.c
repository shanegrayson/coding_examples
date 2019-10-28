/*
 * chapter_03_02.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Shane
 *
 *  Takes in a string and outputs alternate
 *  stuff for tabs and spaces.
 *
 */

void chapter_03_02(char *array)
{
    /*
     * Prints Original string
     */
    int i = 0;
    printf("Original:\t");
    while (array[i] != '\0') {
        printf("%c", array[i]);
        i++;
    }
    printf("\n");

    /*
     * Use this while loop to adjust the size of the
     * array that is getting returned since it will
     * be different than the one being brought though
     */
    i = 0;
    int arr_length = 0;
    while (array[i] != '\0') {
        if (array[i] == ' ')
            arr_length += 5;
        else if (array[i] == '[') {
            arr_length += 1;
            i += 5;
        }
        else
            arr_length += 1;
        i++;
    }

    /*
     * Changed this just to test SPC because I
     * accidently deleted a large section for TAB
     */
    char return_string[arr_length];
    int j = 0;

    printf("Reordered:\t"); 
    i = 0;
    while (array[i] != '\0') {
        switch (array[i]) {
           case ' ':
                return_string[j] = '[';
                return_string[j+1] = 'S'; 
                return_string[j+2] = 'P'; 
                return_string[j+3] = 'C'; 
                return_string[j+4] = ']';
                j += 5;
                break;
            case '[':
                if (array[i+1] == 'S' && array[i+2] == 'P' && array[i+3] == 'C') {
                    return_string[j] = ' ';
                    i += 4;
                }
                j++;
                break;
            default:
                return_string[j] = array[i];
                j++;
                break;
        } //end Switch
        i++;
    } //end While

    i = 0; 
    while (i < arr_length) {
        printf("%c", return_string[i]);
        i++;
    }
}// end Chapter_03_02()
