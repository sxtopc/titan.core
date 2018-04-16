/******************************************************************************
 * Copyright (c) 2000-2018 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *   Szabados, Kristof
 *
 ******************************************************************************/
// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.7.pl2
// for ecsardu (ecsardu@E0017A4D11749) sometime in 2008


// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "PT_DefOpt.hh"

#include "Dumping.hh"

#ifndef OLD_NAMES
namespace Tsenderos {
#endif


PT__DefOpt::PT__DefOpt(const char *par_port_name)
	: PT__DefOpt_BASE(par_port_name)
{

}

PT__DefOpt::~PT__DefOpt()
{

}

void PT__DefOpt::set_parameter(const char *parameter_name,
	const char *parameter_value)
{

}

void PT__DefOpt::Event_Handler(const fd_set *read_fds,
	const fd_set *write_fds, const fd_set *error_fds,
	double time_since_last_call)
{

}

void PT__DefOpt::user_map(const char *system_port)
{

}

void PT__DefOpt::user_unmap(const char *system_port)
{

}

void PT__DefOpt::user_start()
{

}

void PT__DefOpt::user_stop()
{

}

// Deff was "sent out". Get back an Opt
void PT__DefOpt::outgoing_send(const DATATYPES_NS Deff& send_par)
{
    TTCN_Buffer buffer;
    TTCN_EncDec::clear_error();
    send_par.encode( DATATYPES_NS Deff_descr_, buffer, TTCN_EncDec::CT_BER, BER_ENCODE_DER );
    TTCN_EncDec::clear_error();

    DATATYPES_NS Opt o2;
    o2.decode( DATATYPES_NS Opt_descr_, buffer, TTCN_EncDec::CT_BER, BER_ACCEPT_ALL );
    incoming_message( o2 );
}

void PT__DefOpt::outgoing_send(const DATATYPES_NS Opt& send_par)
{
    TTCN_Buffer buffer;
    TTCN_EncDec::clear_error();
    send_par.encode( DATATYPES_NS Opt_descr_, buffer, TTCN_EncDec::CT_BER, BER_ENCODE_DER );

    TTCN_EncDec::clear_error();

    DATATYPES_NS Deff d2;
    d2.decode( DATATYPES_NS Deff_descr_, buffer, TTCN_EncDec::CT_BER, BER_ACCEPT_ALL);
    incoming_message( d2 );
}

#ifndef OLD_NAMES
} /* end of namespace */
#endif
