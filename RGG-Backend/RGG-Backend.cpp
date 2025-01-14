﻿/*****************************************************************************
***
Copyright 2021 by Juicern(JuicernChu@outlook.com).
All rights reserved.

Permission to use, copy, modifyand distribute this software for personaland educational use is hereby granted without fee, provided that the above copyright notice appears in all copiesand that both that copyright noticeand this permission notice appear in supporting documentation, and that the names of Addison Wesley Longman or the author are not used in advertising or publicity pertaining to distribution of the software without specific, written prior permission.Addison Wesley Longmanand the author make no representations about the suitability of this software for any purpose.It is provided "as is" without express or implied warranty.

ADDISON WESLEY LONGMAN AND THE AUTHOR DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.IN NO EVENT SHALL ADDISON WESLEY LONGMAN OR THE AUTHOR BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
***
******************************************************************************/

#pragma once
#include <iostream>
#include "show_graph.h"
#include "read_graph.h"

int main() {
	auto host_graph = read_host_graph();
	auto productions = read_productions();
	auto [is_ok, processes] = reduce(host_graph, productions);
	if (!is_ok) {
		std::cout << "This graph is not this grammar language" << std::endl;
	}
	else {
		draw_process_in_html(processes);
		std::cout << "This graph is a language of this grammar." << std::endl;
		std::cout << "And the process is write in the process.html." << std::endl;
		show_process();
	}
}



