static int r_old=0, e_old=0, e_old2=0;
…
e_func = v_des - v_act;
r_mot = r_old + Kp*(e_func-e_old) + Ki*(e_func+e_old)/2+ Kd*(e_func - 2* e_old + e_old2);
r_mot = min(r_mot, +100); /* limit output */
r_mot = max(r_mot, -100); /* limit output */
r_old = r_mot;
e_old2 = e_old;
e_old = e_func;