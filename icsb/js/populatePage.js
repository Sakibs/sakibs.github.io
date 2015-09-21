var translation = "Allah is Greatest, Allah is Greatest, Allah is Greatest\n\
There is no deity but Allah\n\
Allah is Greatest, Allah is Greatest,\n\
And praise be to Allah\n\
Allah is more Greatest\n\
And praise be to Allah in abundance\n\
And glory to Allah in the early morning and the late afternoon\n\
There is no god except Allah, the One and Only\n\
He fulfilled His promise, Helped His servant, Strengthened His forces\n\
And alone routed out the clans \n\
There is no god except Allah. Him alone we worship\n\
Offering Him sincere devotion even if the disbelievers hate it\n\
O Allah, evoke Your blessings on our leader (Prophet ) Muhammad (pbuh)\n\
And the family of our leader (Prophet) Muhammad (pbuh)\n\
And the companions of our leader (Prophet) Muhammad (pbuh)\n\
And the helpers of our leader (Prophet) Muhammad (pbuh)\n\
And the wives of our leader (Prophet) Muhammad (pbuh)\n\
And the descendants of our leader (Prophet) Muhammad (pbuh)\n\
And send abundant peace upon them".split('\n')

var transliteration = "Allaahu Akbar, Allaahu Akbar, Allaahu Akbar\n\
Laa Ilaaha Illallaah\n\
Allaahu Akbar, Allaahu Akbar\n\
Wa Lillaahil Hamd\n\
Allaahu Akbar Kabeera\n\
Wal Hamdu Lillaahi Katheera\n\
Wa subhaan allaahi Bukratan Wa Aseela\n\
Laa Ilaaha Illallaahu Wa'dah\n\
Sadaqa wa'dah Wa Nasara 'abdah Wa a'azza Jundah\n\
Wa Hazamal Ahzaaba Wahdah\n\
Laa Ilaaha Illallaah, Wa laa Na'abudu Illa Iyyaah\n\
Mukhliseena lahudeena Walaw Karihal Kafiruun\n\
Allaahumma Salli ala Sayyidinaa Muhammad\n\
Wa ala Aali Sayyidi naa Muhammad\n\
Wa ala As'haabi Sayyidinaa Muhammad\n\
Wa ala ansari Sayyidinaa Muhammad\n\
Wa ala Azwaaji Sayyidinaa Muhammad\n\
Wa ala Dhuriyyati Sayyidinaa Muhammad\n\
Wa Sallam Tasleeman Katheeraa".split('\n')

window.onload = function(){ 
	console.log("hello");
	console.log(transliteration.length);
	console.log(translation.length);
	var tbody = document.getElementById('takbeer');
	for (i=0; i < translation.length; i++) {
		console.log(i)
		var table_cell = '<tr><td><div class="container">' + 
							'<div class="row"><img src="imgs/line'+i+'.png" height="42"></div>' +
							'<div class="row" style="color: #298A08">'+transliteration[i]+'</div>' +
							'<div class="row" style="color: #BDBDBD">'+translation[i]+'</div>' +
						  '</div></td></tr>';
		console.log(tbody);
		tbody.innerHTML += table_cell;
	}
}

