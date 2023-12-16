create database projectdb;
use projectdb;

create table financial_transactions (
transaction_id int primary key,
Amount Decimal(10,2) not null,
timestamp int NOT NULL,
sender_account varchar(50) not null,
reciever_account varchar(50) not null,
status VARCHAR(20) DEFAULT 'Pending'
);

select * from financial_transactions;

insert into financial_transactions values
( 158, 59768.92, 169, '29667X', '99667X', 'Completed'),
( 161, 69765.92, 152, '89667Y', '79667X', 'Completed'),
( 172, 79755.92, 189, '59667Y', '69667X', 'Completed'),
( 175, 89762.92, 195, '39669X', '49667X', 'Pending');


select * from financial_transactions;
