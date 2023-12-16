create database projectdb;
use projectdb;

create table financial_transactions (
transaction_id int primary key,
Amount Decimal(10,2) not null,
timestamp TIMESTAMP not null,
sender_account varchar(50) not null,
reciever_account varchar(50) not null,
status VARCHAR(20) DEFAULT 'Pending'
);

select * from financial_transactions;

drop table financial_transactions;