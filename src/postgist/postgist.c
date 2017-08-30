/*
  Copyright (C) 2017 National Institute For Space Research (INPE) - Brazil.

  pg_postgist is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License version 3 as
  published by the Free Software Foundation.

  pg_postgist is distributed  "AS-IS" in the hope that it will be useful,
  but WITHOUT ANY WARRANTY OF ANY KIND; without even the implied warranty
  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with pg_postgist. See LICENSE. If not, write to
  Gilberto Ribeiro de Queiroz at <gribeiro@dpi.inpe.br>.
 */


/*!
 *
 * \file postgist/postgist.c
 *
 * \brief Postgis-t spatial-temporal types for PostgreSQL.
 *
 * \author Gilberto Ribeiro de Queiroz
 * \author Fabiana Zioti
 *
 * \date 2017
 *
 * \copyright GNU Lesser Public License version 3
 *
 */


/* PostgreSQL */
#include <postgres.h>
#include <fmgr.h>


/* Prototype definitions */
void _PG_init(void);

void _PG_fini(void);


/*
  Note: assure that this is the only PG_MODULE_MAGIC definition
  in the whole extension!
 */
PG_MODULE_MAGIC;


void _PG_init()
{
  /*elog(NOTICE, "Postgis-t initialized!");*/
}


void _PG_fini()
{
  /*elog(NOTICE, "Postgis-t finalized!");*/
}
