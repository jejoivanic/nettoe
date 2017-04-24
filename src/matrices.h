/* netToe Version 1.2.0
 * Release date: 30 December 2009
 * Copyright 2000,2001 Gabriele Giorgetti <ggdev@users.sourceforge.net>
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* functions set not used yet in nettoe */

typedef int MATRIX_3x3[3][3];

enum { MATRIX_BLANK, MATRIX_O, MATRIX_X };

void nettoe_init_matrix_3x3  (MATRIX_3x3 matrix);
void nettoe_print_matrix_3x3 (MATRIX_3x3 matrix);

/*
int nettoe_send_matrix_3x3  (MATRIX_3x3 matrix, int socket);
int nettoe_recive_matrix_3x3 (MATRIX_3x3 matrix, int socket);
*/
