// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/5 R4D
// for eadrkir (eadrkir@eadrkir-VirtualBox) on Mon Apr 18 14:18:01 2016

// Copyright (c) 2000-2018 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "Sem_160201_004_loopbackPort.hh"

namespace Sem__160201__invoking__altsteps__004 {

Sem__160201__004__loopbackPort::Sem__160201__004__loopbackPort(const char *par_port_name)
	: Sem__160201__004__loopbackPort_BASE(par_port_name)
{

}

Sem__160201__004__loopbackPort::~Sem__160201__004__loopbackPort()
{

}

void Sem__160201__004__loopbackPort::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void Sem__160201__004__loopbackPort::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void Sem__160201__004__loopbackPort::Handle_Fd_Event_Error(int /*fd*/)
{

}

void Sem__160201__004__loopbackPort::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void Sem__160201__004__loopbackPort::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void Sem__160201__004__loopbackPort::Handle_Timeout(double time_since_last_call) {}*/

void Sem__160201__004__loopbackPort::user_map(const char * /*system_port*/)
{

}

void Sem__160201__004__loopbackPort::user_unmap(const char * /*system_port*/)
{

}

void Sem__160201__004__loopbackPort::user_start()
{

}

void Sem__160201__004__loopbackPort::user_stop()
{

}

void Sem__160201__004__loopbackPort::outgoing_send(const INTEGER& send_par)
{
	incoming_message(send_par);
}

} /* end of namespace */

