/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:35:01 by yhadari           #+#    #+#             */
/*   Updated: 2021/11/25 15:23:46 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void){
    return Account::_nbAccounts;
}
int Account::getTotalAmount(void){
    return Account::_totalAmount;
}
int Account::getNbDeposits(void){
    return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals(void){
    return Account::_totalNbWithdrawals;
}

void    display_time(int nb){
    
    if (std::to_string(nb).length() == 1)
        std::cout << '0';
    std::cout << nb;
}

void    Account::_displayTimestamp(void){
    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    std::cout << "[";
    display_time(1900+ltm->tm_year);
    display_time(1+ltm->tm_mon);
    display_time(ltm->tm_mday);
    std::cout << "_";
    display_time(ltm->tm_hour);
    display_time(ltm->tm_min);
    display_time(ltm->tm_sec);
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

int Account::checkAmount(void) const{
    return _amount; 
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
        return false;
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
    return true;
}

void    Account::displayStatus(void) const{
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}