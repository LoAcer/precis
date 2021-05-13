# 第三部分《数据库系统原理》实践环节考核规定
## 3.1《数据库系统原理》实践环节考核意见

一、考核类型

上机考核

二、考核环境

硬件: `IBM PC`或兼容机`PentiumⅡ`以上机型:
软件: `Microsoft Windows2000`以上: `Microsoft SQL Server2000`

三、考核方法

考生抽取试题后,在45分钟内,完成试卷中所要求的全部操作,并作必要的记录。考核结束后,考生上交试卷。上机考核成绩由主考人员初评,经考点负责人审核签名,报主考院校核定。成绩分合格、不合格两类。

四、考核内容

在关系数据库管理系统 `Microsoft SQL Server2000`查询分析器中,交互地使用关系数据语言SQL。

1.SQL语言的数据定义语句:
::: tips SQL
CREATE DATABASE
CREATE TABLE、 CREATE VIEW、 CREATE INDEX
DROP TABLE、DROP VIEW、 DROP INDEX
AITER TABLE语句。
:::

2.SQL语言的数据查询语句(SELECT)

基本查询、连接查询(自连接)及嵌套查询:查询语句的各类子句,谓词及运算符、数值函数的使用。

3.SQL语言的数据更新语句

DELETE、 INSERT及UPDATE及三个语句的使用

## 3.2《数据库系统原理》上机考核指导

本课程上机考核的重点是`SQL`语言的交互使用在关系数据库管理系统 `Microsoft SQL Server2000`环境中,学员应能独立完成考题要求。上机考核前,学员应熟练掌握`Microsoft SQL Server2000`中的`T-SQL`语言,并进行实际的上机操作实践。为帮助学员顺利通过考核,下面给出上机考核的题型,并对相关知识点简要分析。

[样题一]已知一个关系模型中,有相应的4个关系模式:

供应商(<u>供应商代码</u>,姓名,状况,地址)

工程(<u>工程代码</u>,工程名称,地点)

零件(<u>零件代码</u>,零件名称,规格,颜色,产地)

供应零件(<u>供应商代码</u>,工程代码,件代码,数量)

S(SNO, SNAME, STATUS, CITY)

J(JNO, JNAME, CITY)

P(PNO, PNAME, TYPE, COLOR, CITY)

SPJ (SNO, PNO, JNO, QTY)

四个关系的主码已用横线标出,SPJ表的 SNO PNO,JNO列作为相应表的外码,分别参照S、P、J的主码列SNO,PNO,INO,使用 `Microsoft SQL Server2000`中的`T-SQL`语句:

- (1)为每个关系建立相应的表S,P,J,SPJ;
- (2)定义关于每个供应商供应零件总量的视图VEW-1
- (3)在S表的 SNAME列上建立唯一索引IDX-1
- (4)完成如下查询:
    A查询给某工程提供的零件数量在2000以上的供应商代码,并给出工程代码及供
    应总量(使用GROUP BY和 HAVNG子句)。
    B.至询其所在城市也出产零件的供应商记录及零件的名称和规格b。
    C查询与代码为'S2'的供应商同在一个城市居住的供应商代码。
    D.根据所建立的视图VEW-1,查询供应零件总量在2000以上的供应商代码。
- (5)完成如下更新操作
    A.删除S表中代码为’S1’的记录
    B.向表中插入一新记录,目前仅知道其代码为‘S1’,姓名为孙江明。
    C.修改代码为'S2'的供应商姓名为'王小红'。

|分析|样题中的(1)、(2)、(3)小题,主要考核`T-SQL`的数据定义语句。即 `CREATE DATEBASE`、 `CREATE TABLE`、 `CREATE VIEW`、 `CREATE INDEX`.使用 `CREATE TABLE`建立表时,不要忘记关于表中某些列的约束。有时,表或表间存在的约束是隐含的,考核时,应仔细分析题目中的信息,使用 `CREATE VIEW`建立视图的关键是设计其中的子查询。(2)中即为一个需使用`GROUP BY`及`SUM()`数值函数的较复杂的查询。使用 `CREATE INDEX`建立索引时,应注意题目中所要求的索引类型。

|分析|样题中的(4)小题主要考核`T-SQL`的数据查询语句 `SELECT`的使用,其中(4)小题是对视图的查询,一旦视图被建立,对其进行查询操作。与对基本表的查询完全一致,做此类题目,应仔细分析题目要求查询的信息,以决定使用哪种类型的查询。A小题只使用SPJ表即可获得所需信息:B小题为连接查询:分析题目即可发现,需查询的信息“供应商记录”只能从S表中获得,而“零件的名称和规格”可从J表中获得,且二者可用“产地”(或“地址”)作连接属性C小题为嵌套查询,一般而言,连接查询与嵌套查询可互相替代,若题目无特别要求,学员应选用自己较熟悉的查询类型。 `SELECT`语句是`SQL`语言中用法最灵活的语句。上机考核前,学员对此语句的使用应多作练习。

样题中的(5)小题主要考核`T—SQL`,的数据更新语句,即 `INSERT、DELETE、UPDATE三条语句,其中,A小题为有条件地删除某(些)记录行;B小题是向表中插入一不完整的记录;C小题是记录行中列数据的更新操作。

[答案]
(1)
create table S(sno char(4) not null,
Sname char(20),
status int,
city char(20),
CONSTRAINT S_key PRIMARY KEY(sno));

create table P(pno char(4) not null
pname char(20),
city char (20),
CONSTRAINT P_key PRIMARY KEY (pno));

create table J(jno char(4) not null.
jname char(20),
type char(20),
color char (10),
city char (20),
CONSTRAINT J_key PRIMARY KEY(jno));

create table SPJ (sno char (4),
pno char(4),
jno char(4),
qty int,
CONSTRAINT SPJ_key PRIMARY KEY(sno, pno, jno),
CONSTRAINT FK_s FOREIGN KEY (sno) REFERENCES S(sno),
CONSTRAINT FK_p FOREIGN KEY (pno) REFERENCES P(pno),
CONSTRAINT FK_j FOREIGN KEY (jno) REFERENCES J(jno));

(2)
create VIEW VIEW_1(sam, qty_sum)
As select sno, sum(qty) from SPJ GROUP BY sno;

(3)create index idx_1 on S(sname);

(4) ① select sno, jno, sum(qty),
from SPJ
group by sno, jno having sum(qty)>2000;

② select S.*, pname,type
from S,P
where S.city=P.city;

③ select
from S
where city=(select city
from S
where She='S2');

④ select sno
from VIEW_1
where qty_sum>2000;

(5)①delete from S
where sno='sl';

② insert into(sno, sname) values('s1','孙江明');
③ update S
set sname='王小红'
where sno='S2';

[样题二] 某数据库中己有三个表.其关系模式为:

学生(<u>学号</u>,姓名,年龄,系名,省份)

课程(<u>课程号</u>,课程名,先修课号)

学生选课(<u>学号,课程号</u>,学生成绩)

S(<u>SNO</u>, SN, SA, SD, PROVINCE)

C(<u>CNO</u>, CN, PCNO)

SC (<u>SNO, CNO</u>, G)

其中,横线表示相应表的主码列:
- (1)建立关于学生学号及其平均成绩的视图VEW-2。
- (2)在C表的CN列上建立唯一索引IDX2。
- (3)完成如下查询
①查询除计算机系、数学系('CS'、‘MA’)以外的(使用谓词 `NOT IN`)学生的姓名及年龄,输出结果按年龄升序排列。
②查询课程号为’C1’的课程的间接选修课。(使用表的自身连接)
③查询没有选修课程号为’C1’课程的学生姓名(使用谓词`NOT EXISTS`)
- (4)完成如下更新操作:
①将数学系所有学生的成绩置为’0’;
②删除计算机系所有学生的选课记;
③首先建立表 `DEPTAGE`;然后对每个系,求其学生的平均年龄,并将结果存于DEPTAGE中;

[分析] 从题型方面看,该样题与前一题目完全一致,仍然考核学员对`T-SQL`语言数据定义、数据查询及更新语句的掌握情况,但其中的每一小题相对于前一题目,都较为复杂,设计此样题的目的是提醒学员应作全面详致的考前准备,考核时更应仔细分析题意。
(1)小题在其子查询中须使用`AVG()`数值函数及 `GROUP BY`子句;(2)小题所要求建立的索引类型为唯一索引(`UNIQUE`);(3)小题①③分别要求使用谓词 `NOT IN`、`NOT EXISTS`,且①要使用 `ORDER BY`子句;③为嵌套查询；②小题要求使用表的自连接完成,且附加有另外的查询条件;(4)小题的①②在其 `where`子句中都需包含一子查询,且这一子查询为`S`、`Sc`表的连接查询;③小题为向某表中插入多个记录行的操作,在 `INSERT`中使用一包含`GROUP BY`子句的子查询。
答案
(1) create VIEW VIEW_2(sno, gave)
as select sno, avg(g)
from sc
group by sno;

(2) create unique index idx_2 on c(cn);

(3)① select sn,sa
from s
where sd not in('MA', 'CS')
order by sa;

② select Y.pcno
from C X, C Y
Where X. pcno=Y. cno and X. cno='C1';

③ select sn
from s
where not exists
(select *
from sc
where sno=s. sno and cno='C1');

(4)① update sc
set g='0'
where'MA'=
(select sd
from s,sc
where s.sno=sc. sno);

② delete from sc
where 'CS'=
(select sd
from s,sc
where s.cno=sc. sno);

③create table deptage(sd chat (20), avgage int)
Insert into deptage
From s
group by sd;

以上两样题为上机考核的模拟试题。学员应仔细阅读教材及参考资料中的有关章节,以及 `SQL Server2000`的随机文档,进行实际的上机操作实践,考核前,学员务必熟悉` Microsoft SQL Server2000 `环境,特别是` Enterprise Manager`和 `Query Analyzer`实用工具,并能交互式地利用` Query Analyzer`键入SQL命令进行常用的数据库操作。

[样题三] 启动进入` Enterprise Manager`环境进入` Query Analyzer`,打开并启动`工程-供应-零件`数据库,键入执行以下SQL命令,在试卷上填写回答有关的问题。
```sql
SELECT S.*
FROM S
WHERE NOT EXISTS
(SELECT*
FrOm SPJ X
WHERE SNO='S2' AND NOT EXISTS
(SELECT * FROM
SPJ Y
WHERE Y. SNO=S. SNO AND Y. JNO=. JNO));
```
问:执行上述SQL命令的结果是:

|SNO|SNAME|STATUS|CITY|
| --- | --- | --- | --- |
|S1|Smith|20|London|
|S2|Jones|10|Paris|
2 records selected

[分析] 本题为使用谓词 `NOT EXISTS`、`AND`较复杂的嵌套查询,学员在键入执行该SQL命令前,应能理解命令的语义。此处为查询供应了S2供应商所供应的所有零件的供应商记录。

[样题四] 按照以下查询要求,写出相应的SQL命令,调试正确后,在试卷上填写回答有关的问题。要求:查找住在同一城市的供应商记录

1.相应的SQL命令如下:
SELECT S1.SNAME, S2.SNAME
FROM S S1, S S2
WHERE S1. CITY=S2. CITY AND
S1.SNO < S2.SNO;
2.正确的查询结果如下:

|SNAME|SNAME|
| --- | --- |
|Clark|Smith|
|Blake|Jones|
2 records selected

[分析] 显然,本题需用表S的自身连接完成。我们通过用S1和S2表示S而连接
起来。又因为是遍历查询,如采用S.SNO!=S2.SNO必然导致同一份数据被查询两
遍,故只能采用S1.5NO(S2.SNO

上机注意事项:
主要掌握` Microsoft SQL Server`中的` Enterprise Manager`和` Query Analyzer`,`Enterprise Manager`主要用于总控平台, `Query Analyzer`用于输入`SQL`语句并执行,在`Query Analyzer`中也可以连接 server服务器,执行时。先选择语句,再用鼠标点击工具栏上的绿色小按纽执行,结果在窗口下方显示。

## 3.3《数据库系统原理》上机练习题
以下是工程供应零件数据库示例:
S(供应商)

|SNO|SNAME|STATUS|CITY|
| --- | --- | --- | --- |
|S1|N1| |上海|
|S2|N2|20|北京|
|S3|N3|30|北京|
|S4|N4|40|上海|
|S5|N5|50|南京|
|S6|N6|30|武汉|

P(零件)

|PNO|PNAME|TYPE|COLOR|CITY|
| --- | --- | --- | --- | --- |
|P1|PN1|G1|红|上海|
|P2|PN2|G2|绿|北京|
|P3|PN3|G3|蓝|南京|
|P4|PN4|G4|红|北京|
|P5|PN5|G5|蓝|广州|
|P6|PN6|G6|绿|上海|
J(工程)

|JNO|JNAME|CITY|
| --- | --- | --- |
|J1|JN1|上海|
|J2|JN2|广州|
|J3|JN3|南京|
|J4|JN4|南京|
|J5|JN5|上海|
|J6|JN6|武汉|
|J7|JN7|上海|
SPJ(供应)

|SNO|PNO|JNO|QTY|
| --- | --- | --- | ----|
|S1|P1|J1|200|
|S1|P1|J4|700|
|S2|P3|J1|400|
|S2|P3|J2|200|
|S2|P3|J3|200|
|S2|P3|J4|500|
|S2|P3|J5|600|
|S2|P3|J6|400|
|S2|P3|J7|800|
|S2|P3|J2|100|
|S3|P3|J1|200|
|S3|P4|J2|500|
|S4|P6|J3|300|
|S4|P6|J7|300|
|S5|P2|J2|200|
|S5|P2|J4|100|
|S5|P5|J5|500|
|S5|P5|J7|100|
|S5|P6|J2|200|
|S5|P1|J4|1000|
|S5|P3|J4|1200|
|S5|P4|J4|800|
|S5|P5|J4|400|
|S5|P6|J4|500|

1.进入` Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。该库有供应商,请先熟悉,按要求完成如下查询,并将结果写在试卷上。

[题目]
查询向某工程供应零件P1的供应商姓名,其住所与工地相同。

2.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。
[题目]

①建立视图 `VIEW_TEST`,该视图说明北京供应商的情况(在试卷上写出语句),据此视图查询这类供应商中,姓名为`N3`的供应商的代号及状况乘以100。

②查询工程名称的首字母为J的工程的代号及工地。

3.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①建立视图`VIEW-TEST`,其提供关于供应商`S1`所供应零件的情况(在试卷上写出语句)并据此视图查询`S1`供应商中供应零件的代号及数量,并按数量降序排序。

②查询零件重量在12与17之间的零件名称。

4.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①建立视图`VIEW_TEST`,其提供关于住在北京,状况`大于等于20`的供应商的情况(在试卷上写出语句),并据此视图查询状况为30的供应商姓名。

②查询`J1`工程所使用的`S1`供应商提供的零件代号及数量。

5.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求
完成如下题目:查询结果写在试卷上。

[题目]
①建立视图 `VIEW TEST`,其提供关于重量在14与19之间的零件的情况(在试卷上写出语句),并据此视图查询重量为17的零件的名称及颜色。

②查询供应商记录,并按状况升序排序。

6.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询供应商`S1`所供应的零件按零件分组后的总量在200以上的记录。

②查询零件名称为`PN4`的零件情况。

7.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。
[题目]
①查询住在同一城市的供应商记录

②查询零件表P城市名中第二个字是“京”的零件1代号及名称

8.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询住在上海并且向工地在南京的项目提供零件的供应商情况。

②查询零件表P重量为12或14的零件的产地及名称。

9.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询工程代号为`J2`的工程所使用的所有零件的名称及数量。

②查询供应商表S中状况为空值的供应商代号。

10.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询没有使用北京产的零件的工程代号。

②查询使用名称为`PN3`零件的工程的所在地

11.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询住在上海的供应商提供的北京产的,且工程在南京的项目使用的零件、供应商及工作的情况。

②查询向`J1`工程提供零件的供应商姓名。

12.进入`Enterprise Manager`环境,安装并启动工一供应一零件数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①建立视图`VIEW-TEST`,该视图提供关于使用上海产的零件的工程的情况(在试卷上写出语句);并据此视图查询使用此类零件的工程名称。

②查询使用零件的数量为700和400的工程代号

13.进入 `Enterprise Manager`环境,安装并启动`工程一供应——零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①建立视图`VIEW-TEST`,该视图提供零件数量人于200的供应商情况(在试卷上写出语句),并据此视图查询为`J4`工程提供这类零件的供应商代号。

②查询数量大于等于700的供应零件的情况,按数量降序排序。

14、进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询按城市分组后,平均状况大于20的供应商情况。

②查询颜色为红和蓝的零件的情况。

15.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询同住在北京的供应商情况。

②查询按城市分组后,平均重量大于15的零件名称。

16.进入 `Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上

[题目]
①建立视图 `VIEW_TEST`,该视图提供供应零件`P1`的供应商的记录(在试卷上写出语句)。据此视图查询住在上海的这类供应商的情况。

②查询工地在武汉的工程情况。

17.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询住所在北京的供应商按其状况分组后的状况及状况的最大值与最小值。

②查询使用名称为PN3零件的工程的所在地。

18.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询供应商住所与零件产地相同的有关供应商记录,并按住所降序排序。

②查询产地北京且颜色为红色的零件代号及名称。

19.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询没有使用供应商住所与零件产地相同的有关供应商记录,并按住所降序排序。

②查询产地北京且颜色为红色的零件代号及名称。

20.进入`Enterprise Manager`环境,安装并启动`工程一供应一零件`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询给工程`J1`供应零件的供应商来自那些城市,并说明他们各给`J1`供应哪些零件(snane,s.city, pname)。

②查询同时向3个以上的项目供应零件的供应商姓名(sname)。

以下是学校教学数据库示例:
学校教学关系模型中,有相应的4个关系模式:

学生(<u>学号</u>,姓名,性别,出生日期,班号)

教师(<u>教师编号</u>,姓名,性别,出生日期,职称,所在系)

课程(<u>课程号</u>,课程名称,授课教师)

成绩(<u>学号,课程号</u>,分数)

student(<u>NO</u>, NAME, SEX, BIRTHDAY, CLASS):

teacher(<u>NO</u>, NAME, SEX, BIRTHDAY, PROF, DEPART):

course(<u>CNO</u>, CNAME, TNO):

score(<u>NO, CNO, DEGREE</u>)

四个关系的主码已用横线标出
student(学生信息)

|NO|NAME|SEX|BIRTHDAY|CLASS|
| --- | --- | --- | --- | --- |
|108|曾华|男|09/01/77|95033|
|105|匡明|男|10/02/75|95031|
|107|王丽| 女|01/23/76|95033|
|101|李军| 男|02/20/76|95033|
|109|王芳| 女|02/10/75|95031|
|103|陆君| 男|06/03/74|95031|
teacher(教师信息)

|NO|NAME|SEX|BIRTHDAY|PROF|DEPART|
| --- | --- | --- | --- | --- | --- |
|804|李诚|男|12/02/58|副教授|计算机系|
|856|张旭|男|03/12/69|讲师|电子工程系|
|825|王萍|女|05/05/72|助教|计算机系|
|831|刘冰|女|08/14/77|助教|电子工程系|

course(课程信息)

|NO|NAME|SEX|
| --- | --- | --- | 
|3-1-5|计算机导论|825|
|3-245|操作系统|804|
|6-166|数字电路|856|
|9-888|高等数学|100|
score(成绩信息)

|NO|CNO|DEGREE|
| --- | --- | --- |
|103|3-245|86|
|105|3-245|75|
|109|3-245|68|
|103|3-105|92|
|105|3-105|88|
|109|3-105|76|
|101|3-105|64|
|107|3-105|91|
|108|3-105|78|
|101|6-166|85|
|107|6-166|79|
|108|6-166|81|

21.进入 `Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询至少有2名男生的班号

②查询 `student`表中不姓“王”的同学记录。

22.进入`Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询男教师及其所上的课程。

②查询 `student`表中最大和最小的 `birthday`日期值。

23.进入`Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询 `student`表中每个学生的姓名和年龄。

②查询和“李军”同性别并同班的同学name。

24.进 `Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询和“李军”同性别的所有同学的姓名。

②查询所有选修`“计算机导论”`课程的`“男”`同学的成绩表。

25.进入`Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询 `student`表中每个学生的情况,按班号和年龄从大到小排序。

②查询`“男”`教师及其所上的课程。

26.进入 `Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询所有选修`“计算机导论”`课程的`“男”`同学的成绩表

②查询 `student`表中每个学生的姓名和年龄

27.进入`Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询 `student`表中不姓`“王”`的同学记录

②查询 `student`表中最大和最小的 `birthday`日期值。

28.进入 `Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①查询 `student`表中每个学生的情况,按班号和年龄从大到小排序。

②查询和`“李军”`同性别的所有同学的姓名。

29.进入 `Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①建立试图 `VIEW_TEST`.该试图包括的属性有:
student. NO, stlJdent [^1].NAME, curse.CNAME, DEGREE。

②查询每门课程的平均成绩。

30.进入 `Enterprise Manager`环境,安装并启动`学校教学`数据库。按要求完成如下题目;查询结果写在试卷上。

[题目]
①统计学生选修的课程门数。

②把低于总平均成绩的同学成绩提高5%。



[^1]: 原文如此,疑是student
