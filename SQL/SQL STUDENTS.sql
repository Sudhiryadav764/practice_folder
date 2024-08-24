
create table students(
name varchar(20),
roll_no int,
course varchar(20),
address varchar(20),
primary key(roll_no)
);

select * from students;

INSERT INTO STUDENTS (name,roll_no,course,address) 
values('ram',1264,'BCA','patna'),
('ramu',1244,'BCA','chapra'),
('shyam',1248,'BBA','patna'),
('ramesh',1240,'BCA','patedha'),
('ram',1246,'BCA','patna'),
('ram',1524,'BCA','patna'),
('ram',2413,'B.Com','gaya');

DESC STUDENTTS;