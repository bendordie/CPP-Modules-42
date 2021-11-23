/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:55:36 by cshells           #+#    #+#             */
/*   Updated: 2021/08/05 23:55:40 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <iomanip>
#include <chrono>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::checkAmount() const {
    return (Account::_amount);
}

Account::Account(int initial_deposit) {
    Account::_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_amount = initial_deposit;
    Account::_nbDeposits = 0;
    Account::_nbWithdrawals = 0;
    Account::_totalAmount += Account::checkAmount();
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex;
    std::cout << ";amount:" << Account::checkAmount();
    std::cout << ";created" << std::endl;
}

int Account::getNbAccounts() {
    return (Account::_nbAccounts);
}

int Account::getNbDeposits(Account & acc) {
    return (acc._nbDeposits);
}

int Account::getNbWithdrawals(Account & acc) {
    return (acc._nbWithdrawals);
}

int Account::getTotalAmount() {
    return (Account::_totalAmount);
}

void Account::_displayTimestamp(void) {
    std::time_t tt = std::chrono::system_clock::to_time_t (std::chrono::system_clock::now());

    struct std::tm * ptm = std::localtime(&tt);
    std::cout << "[";
    std::cout << std::put_time(ptm,"%Y");
    std::cout << std::put_time(ptm,"%m");
    std::cout << std::put_time(ptm,"%d");
    std::cout << "_";
    std::cout << std::put_time(ptm,"%H");
    std::cout << std::put_time(ptm,"%M");
    std::cout << std::put_time(ptm,"%S");
    std::cout << "]";
}

void Account::displayAccountsInfos() {
    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "accounts:" << Account::_nbAccounts;
    std::cout << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits;
    std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
    std::cout << std::endl;
}

Account::~Account() {
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex;
    std::cout << ";amount:" << Account::checkAmount();
    std::cout << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
    int p_amount;

    p_amount = Account::_amount;
    Account::_amount += deposit;
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex;
    std::cout << ";p_amount:" << p_amount;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << Account::checkAmount();
    std::cout << ";nb_deposits:" << Account::_nbDeposits;
    std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    int p_amount;

    p_amount = Account::_amount;
    if (Account::checkAmount() - withdrawal >= 0)
    {
        Account::_amount -= withdrawal;
        Account::_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        Account::_displayTimestamp();
        std::cout << " index:" << Account::_accountIndex;
        std::cout << ";p_amount:" << p_amount;
        std::cout << ";withdrawal:" << withdrawal;
        std::cout << ";amount:" << Account::checkAmount();
        std::cout << ";nb_deposits:" << Account::_nbWithdrawals;
        std::cout << std::endl;
        return (true);
    }
    else
    {
        Account::_displayTimestamp();
        std::cout << " index:" << Account::_accountIndex;
        std::cout << ";p_amount:" << p_amount;
        std::cout << ";withdrawal:" << "refused";
        std::cout << std::endl;
        return (false);
    }
}

void Account::displayStatus() const {
    Account::_displayTimestamp();
    std::cout << " index:" << Account::_accountIndex;
    std::cout << ";amount:" << Account::checkAmount();
    std::cout << ";deposits:" << Account::_nbDeposits;
    std::cout << ";withdrawals:" << Account::_nbWithdrawals;
    std::cout << std::endl;
}