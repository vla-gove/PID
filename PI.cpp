static int r_old=0, e_old=0;
…
e_func = v_des - v_act;
r_mot = r_old + Kp*(e_func-e_old) + Ki*(e_func+e_old)/2;
r_mot = min(r_mot, +100); // limit motor output
r_mot = max(r_mot, -100); // limit motor output
r_old = r_mot;
e_old = e_func;