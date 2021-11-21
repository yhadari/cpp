/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:35:01 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/21 15:13:15 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){
    return (_nbAccounts);
}
int Account::getTotalAmount(){
    return (_totalAmount);
}
int Account::getNbDeposits(){
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(){
    return (_totalNbWithdrawals);
}
void    Account::_displayTimestamp(){
    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    std::cout << "[";
    std::cout << 1900+ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday;
    std::cout << "_";
    std::cout << 5+ltm->tm_hour << 30+ltm->tm_min << ltm->tm_sec;
    std::cout << "] ";
    
}

Account::Account( int initial_deposit ){
    
    _displayTimestamp();
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts++;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(){
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl; 
}

void    Account::displayAccountsInfos(){

    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "totale:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int Account::checkAmount() const{
    return (_amount); 
}

void    Account::makeDeposit(int deposit){
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits = 1;
    _totalNbDeposits++;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:1" << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal){
    
    _displayTimestamp();
    if (_amount - withdrawal < 0)
    {
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals = 1;
    _totalNbWithdrawals++;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:1" << std::endl;
    return (true);
}

void    Account::displayStatus() const{
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}