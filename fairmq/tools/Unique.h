/********************************************************************************
 *    Copyright (C) 2017 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

#ifndef FAIR_MQ_TOOLS_UNIQUE_H
#define FAIR_MQ_TOOLS_UNIQUE_H

#include <string>

namespace fair
{
namespace mq
{
namespace tools
{

// generates UUID string
std::string Uuid();

// generates UUID and returns its hash
std::size_t UuidHash();

} /* namespace tools */
} /* namespace mq */
} /* namespace fair */

#endif /* FAIR_MQ_TOOLS_UNIQUE_H */
