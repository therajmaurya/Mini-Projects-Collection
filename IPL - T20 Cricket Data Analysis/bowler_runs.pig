ipl = LOAD '/home/node1/Desktop/cricket5.csv' USING PigStorage(',') as (inning,overs,team,stk,nstk,bowler,run,extra,type,name);

q = group ipl by $5;

r = foreach q generate group,SUM(ipl.$6)+SUM(ipl.$7);

s = order r by $1 DESC;

t = limit s 10;

dump t;
