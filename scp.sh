rm scp.log >> /dev/null 2>&1
# for ((i=1; i<=20; i++))
# do
# 	j=`expr $i + 160`
#         echo "ready to deploy on ljq@192.168.1.$j..."
#         sshpass -p kb310 scp -r ./Makefile root@192.168.1.$j:$PWD/ >> scp.log 
#         sshpass -p kb310 scp -r ./afl-fuzz.c root@192.168.1.$j:$PWD/ >> scp.log 
#         sshpass -p kb310 scp -r ./config.h root@192.168.1.$j:$PWD/ >> scp.log 
#         sshpass -p kb310 scp -r ./llvm_mode_18.04 root@192.168.1.$j:$PWD/ >> scp.log 
#         echo "deploy code done"
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make clean" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make clean" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make install" >> scp.log
#         echo "remote make done"
#         sshpass -p kb310 ssh root@192.168.1.$j "echo core > /proc/sys/kernel/core_pattern" >> scp.log
#         echo "core_pattern setting done"
#         sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F INPUT" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F OUTPUT" >> scp.log
#         echo "clear iptables done"
# done

# for ((i=1; i<=17; i++))
# do
# 	j=`expr $i + 120`
#         echo "ready to deploy on ljq@192.168.1.$j..."
#         sshpass -p kb310 scp -r ./afl-fuzz.c root@192.168.1.$j:$PWD/ >> scp.log 
#         sshpass -p kb310 scp -r ./config.h root@192.168.1.$j:$PWD/ >> scp.log 
#         sshpass -p kb310 scp -r ./llvm_mode_18.04 root@192.168.1.$j:$PWD/ >> scp.log 
#         echo "deploy code done"
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make clean" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make clean" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make install" >> scp.log
#         echo "remote make done"
#         sshpass -p kb310 ssh root@192.168.1.$j "echo core > /proc/sys/kernel/core_pattern" >> scp.log
#         echo "core_pattern setting done"
#         sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F INPUT" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F OUTPUT" >> scp.log
#         echo "clear iptables done"
# done

for ((i=1; i<=7; i++))
do
	j=`expr $i + 93`
        echo "ready to deploy on ljq@192.168.1.$j..."
	sshpass -p kb310 scp -r ../snpsfuzzer root@192.168.1.$j:/home/ljq/Desktop/MajorReview/ >> scp.log 
        echo "deploy code done"
        sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make clean install" >> scp.log
        echo "remote make done"
        sshpass -p kb310 ssh root@192.168.1.$j "echo core > /proc/sys/kernel/core_pattern" >> scp.log
        echo "core_pattern setting done"
        sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F INPUT" >> scp.log
        sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F OUTPUT" >> scp.log
        echo "clear iptables done"
done

# for ((i=0; i<=0; i++))
# do
# 	j=`expr $i + 240`
#         echo "ready to deploy on ljq@192.168.1.$j..."
# 	  sshpass -p kb310 scp -r ./afl-fuzz.c root@192.168.1.$j:$PWD/ >> scp.log 
#         sshpass -p kb310 scp -r ./config.h root@192.168.1.$j:$PWD/ >> scp.log 
#         sshpass -p kb310 scp -r ./llvm_mode_18.04 root@192.168.1.$j:$PWD/ >> scp.log 
#         echo "deploy code done"
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make clean" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make clean" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make install" >> scp.log
#         echo "remote make done"
#         sshpass -p kb310 ssh root@192.168.1.$j "echo core > /proc/sys/kernel/core_pattern" >> scp.log
#         echo "core_pattern setting done"
#         sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F INPUT" >> scp.log
#         sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F OUTPUT" >> scp.log
#         echo "clear iptables done"
# done

# j='182'
# echo "ready to deploy on ljq@192.168.1.$j..."
# sshpass -p kb310 scp -r ./afl-fuzz.c root@192.168.1.$j:$PWD/ >> scp.log 
# sshpass -p kb310 scp -r ./config.h root@192.168.1.$j:$PWD/ >> scp.log 
# echo "deploy code done"
# sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make clean" >> scp.log
# sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make" >> scp.log
# sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make clean" >> scp.log
# sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer/llvm_mode_18.04; make" >> scp.log
# sshpass -p kb310 ssh root@192.168.1.$j "cd /home/ljq/Desktop/MajorReview/snpsfuzzer; make install" >> scp.log
# echo "remote make done"
# sshpass -p kb310 ssh root@192.168.1.$j "echo core > /proc/sys/kernel/core_pattern" >> scp.log
# echo "core_pattern setting done"
# sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F INPUT" >> scp.log
# sshpass -p kb310 ssh root@192.168.1.$j "iptables -t filter -F OUTPUT" >> scp.log
# echo "clear iptables done"