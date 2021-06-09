/* -*- C++ -*-
 *
 *  graphics_ssse3.h - graphics routines using X86 SSSE3 cpu functionality
 *
 *  Copyright (c) 2021 TellowKrinkle
 *
 *  tellowkrinkle@gmail.com
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, see <http://www.gnu.org/licenses/>
 *  or write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifdef USE_X86_GFX

#include <SDL.h>

void imageFilterBlend_SSSE3(Uint32 *dst_buffer, Uint32 *src_buffer, Uint8 *alphap, int alpha, int length);
bool alphaMaskBlend_SSSE3(SDL_Surface* dst, SDL_Surface *s1, SDL_Surface *s2, SDL_Surface *mask_surface, const SDL_Rect& rect, Uint32 mask_value);

#endif

