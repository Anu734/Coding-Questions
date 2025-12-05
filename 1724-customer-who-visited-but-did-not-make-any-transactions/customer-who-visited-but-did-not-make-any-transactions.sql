# Write your MySQL query statement below
select 
    customer_id,
    count(*) as count_no_trans
from 
    visits
where
    not exists
        (select 1 from transactions where visits.visit_id = transactions.visit_id)
group by 
    customer_id;