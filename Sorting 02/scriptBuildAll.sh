for FILE in instancias/*
do
        echo $FILE >> result.txt;
        timeout 5m ./apa-first_job 1 < $FILE >> result.txt;
        timeout 5m ./apa-first_job 2 < $FILE >> result.txt;
        timeout 5m ./apa-first_job 3 < $FILE >> result.txt;
        timeout 5m ./apa-first_job 4 < $FILE >> result.txt;
        timeout 5m ./apa-first_job 5 < $FILE >> result.txt;
done


